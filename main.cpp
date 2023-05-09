#include <vector>
#include <bitset>
#include <random>
#include <iostream>

std::vector<std::bitset<128>> rand_gen_sequences(size_t count) {
    std::random_device rd;
    std::mt19937_64 generator(rd());
    std::uniform_int_distribution<uint64_t> distribution(0, UINT64_MAX);

    std::vector<std::bitset<128>> sequences;
    sequences.reserve(count);

    for (size_t i = 0; i < count; ++i) {
        uint64_t first_half = distribution(generator);
        uint64_t second_half = distribution(generator);
        std::bitset<64> first_half_bitset(first_half);
        std::bitset<64> second_half_bitset(second_half);
        std::string full_bit_string = first_half_bitset.to_string() + second_half_bitset.to_string();
        std::bitset<128> sequence(full_bit_string);
        sequences.push_back(sequence);
    }

    return sequences;
}

double frequency_test(const std::bitset<128>& sequence) {
    int sum = 0;

    for (size_t i = 0; i < sequence.size(); ++i) {
        if (sequence[i] == 1)
            sum += 1;
        else
            sum += -1;
    }

    double s_n = std::abs(sum) / std::sqrt(sequence.size());
    double p_value = std::erfc(s_n / std::sqrt(2));

    return p_value;
}


int main() {
    size_t sequence_count = 5;
    std::vector<std::bitset<128>> sequences = rand_gen_sequences(sequence_count);

    for (size_t i = 0; i < sequences.size(); ++i) {
        const auto& sequence = sequences[i];
        std::cout << "Sequence " << (i + 1) << ":\n" << sequence << std::endl;

        double test_a = frequency_test(sequence);
        
        std::cout << "a) Frequency bitwise test: p_value = " << test_a << "\n" << std::endl;
    }

    return 0;
}
#include <vector>
#include <bitset>
#include <random>

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

int main() {

    return 0;
}
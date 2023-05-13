#pragma once

// Standard number of bits per chunk/word when huffing
static const int BITS_PER_WORD = 8;

// Size of alphabet given the number of bits per chunk (2^BITS_PER_WORD)
static const int ALPH_SIZE = 1 << BITS_PER_WORD;

// Number of bits in an int
static const int BITS_PER_INT = 32;

// Value of PSEUDO_EOF character
static const int PSEUDO_EOF = ALPH_SIZE;

// Magic number identifying file compressed by our algorithm
static const int MAGIC_NUMBER = 0xFADE2020;

// Value in compressed files indicating code values are in Standard Count Format
static const int STORE_COUNTS = MAGIC_NUMBER | 1;

// Value in compressed files indicating code values are in Standard Tree Format
static const int STORE_TREE = MAGIC_NUMBER | 2;
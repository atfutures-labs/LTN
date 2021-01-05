#pragma once

#include <Rcpp.h>

size_t to_left_binary (const double from_x,
        const double from_y,
        const double centre_x,
        const double centre_y,
        const std::vector <double> nbs_x,
        const std::vector <double> nbs_y,
        const std::vector <size_t> nbs_idx,
        const bool left = true);

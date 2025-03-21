#include "stats.h"
#include <numeric>
#include <algorithm>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& values) {
    //Implement statistics here
    Stats stats{};

    if (values.empty())
    {
        stats.average = 0.0;
        stats.max = 0.0;
        stats.min = 0.0;
    }
    else {
        stats.average = std::accumulate(values.begin(), values.end(), 0.0) / values.size();
        stats.max = *std::max_element(values.begin(), values.end());
        stats.min = *std::min_element(values.begin(), values.end());
    }

    return stats;
}

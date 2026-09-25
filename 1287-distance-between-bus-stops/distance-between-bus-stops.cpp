class Solution { 
public: 
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) { 
        if (start > destination) { 
            swap(start, destination); 
        } 
        
        int clockwise_distance = 0; 
        int total_distance = 0; 
        
        for (int i = 0; i < distance.size(); ++i) { 
            total_distance += distance[i]; 
            if (i >= start && i < destination) { 
                clockwise_distance += distance[i]; 
            } 
        } 
        
        // Fixed the missing underscores in variable names below
        int counterclockwise_distance = total_distance - clockwise_distance; 
        return min(clockwise_distance, counterclockwise_distance); 
    } 
};

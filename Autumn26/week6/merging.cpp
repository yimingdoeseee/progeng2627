#include <iostream>
#include <fstream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    for (int i = 0; i < v1.size(); i++){
        merged.push_back(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++){
        int j = 0;
        bool positionfound = false;
        while ((positionfound == false) && (j < merged.size())){
            if (v2[i] < merged[j]){
                merged.insert(merged.begin() + j, v2[i]);
                positionfound = true;
            }
            j = j + 1;
        }
        if ((j == merged.size()) && (positionfound == false)){
                positionfound = true;
                merged.push_back(v2[i]);
        }
    }
}
int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    for (int i = 0; i < out.size(); i++){
        std::cout << out[i] << std::endl;
    }

}
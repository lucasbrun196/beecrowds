#include <iostream>
#include <unordered_map>

using namespace std;

bool findWord(string word){

}

int main(){
    unordered_map<string, string> umap;
    umap["brasil"] = "Feliz Natal!";
    umap["alemanha"] = "Frohliche Weihnachten!";
    umap["austria"] = "Frohe Weihnacht!";
    umap["coreia"] = "Chuk Sung Tan!";
    umap["espanha"] = "Feliz Navidad!";
    umap["grecia"] = "Kala Christougena!";
    umap["estados-unidos"] = "Merry Christmas!";
    umap["inglaterra"] = "Merry Christmas!";
    umap["australia"] = "Merry Christmas!";
    umap["portugal"] = "Feliz Natal!";
    umap["suecia"] = "God Jul!";
    umap["turquia"] = "Mutlu Noeller";
    umap["argentina"] = "Feliz Navidad!";
    umap["chile"] = "Feliz Navidad!";
    umap["mexico"] = "Feliz Navidad!";
    umap["antardida"] = "Merry Christmas!";
    umap["canada"] = "Merry Christmas!";
    umap["irlanda"] = "Nollaig Shona Dhuit!";
    umap["belgica"] = "Zalig Kerstfeest!";
    umap["italia"] = "Buon Natale!";
    umap["libia"] = "Buon Natale!";
    umap["siria"] = "Milad Mubarak!";
    umap["marrocos"] = "Milad Mubarak!";
    umap["japao"] = "Merii Kurisumasu!";


    string country;

    while(cin >> country){
        if(umap.find(country) == umap.end()){
            cout << "--- NOT FOUND ---\n";
        }else{
            cout << umap[country] << endl;
        }
    }

}
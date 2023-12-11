#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){}
};

class CWHvideo :public CWH{
    float videoLength;
    public:
        CWHvideo(string s, float r, float vl): CWH(s,r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes "<<endl;
        }
};

class CWHtext :public CWH{
    int words;
    public:
        CWHtext(string s, float r, int wc): CWH(s,r){
            words = wc;
        }
        /*void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Number of words in this text tutorial is: "<<words<<" words "<<endl;
        }*/
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djVideo(title, rating, vlen);
    //djVideo.display();

    // for code with harry text
    title = "Django tutorial textual";
    words = 433;
    rating = 4.19;
    CWHtext djText(title, rating, words);
    //djText.display();
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}
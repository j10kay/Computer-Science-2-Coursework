#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Video {
  public:
    Video();
    Video(string, string);
    void setVideoInfo(string, string);
    string getVideoName() const;
    string getVideoType() const;
  private:
    string videoName;
    string videoType;
};

Video::Video (){
  videoName = "empty";
  videoType = "empty";
}

Video::Video (string vidName, string vidType){
  videoName = vidName;
  videoType = vidType;
}

void Video::setVideoInfo(string vidName, string vidType) {
  videoName = vidName;
  videoType = vidType;
}

string Video::getVideoName() const{
  return videoName;
}

string Video::getVideoType() const {
  return videoType;
}

int main() {

  vector<Video> userPlaylist(50);
  userPlaylist[0].setVideoInfo("Black Panther", "Movie");
  userPlaylist[1].setVideoInfo("Spider Man 3", "Movie");
  userPlaylist[2].setVideoInfo("Jurassic Park", "Movie");
  cout << "Playlist:" << endl << endl; 
  for (int i = 0; i < 3; i++) {
    cout << userPlaylist[i].getVideoName() << " " << userPlaylist[i].getVideoType();
    if (i != 2)
     cout << endl;
  }
  return 0;
}

#ifndef VIDEO_H
#define VIDEO_H

struct MovieTime {    //user defined struct data type
  int hours;
  int minutes;
  int seconds;
};

class Video {
  public:            //public class functions
    Video();         //function prototypes
    Video(string, string, int, int, int, string);
    void setVideoInfo(string, string, int, int, int, string);
    string getVideoName() const;
    string getVideoType() const;
    string getVideoDuration() const;
    string getVideoPlaylist() const;
  private:          //private variables
    string videoName;
    string videoType;
    string playList;
    MovieTime videoDuration;
};

#endif           //Indicate end of header file

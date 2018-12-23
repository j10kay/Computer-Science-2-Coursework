#ifndef VIDEO_H
#define VIDEO_H

class Video {
  public:            //public class functions
    Video();         //function prototypes
    Video(string, int, string, string, string);
    void setVideoInfo(string, int, string, string, string);
    string getVideoName() const;
    string getVideoType() const;
    int getVideoDuration() const;
    string getStreamingService() const;
    string getVideoRating() const;
    string getVideoPlaylist() const;
    virtual void PrintItem() = 0;  //virtual void function

  private:          //private variables
    string playList;

  protected:       //protected variables
    string videoName;
    string rating;
    string streamingService;
    int videoDuration;
    string videoType;
};

#endif           //Indicate end of header file

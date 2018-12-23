#ifndef VIDEO_H
#define VIDEO_H

class Video {
  public:            //public class functions
    Video (){      //Default constructor

      playList = "None";
      year = "None";
      videoName = "None";
      videoRating = "None";
      userRating = "None";
      videoDuration = 0;
      videoType = "None";
    }

    Video (string title, string genre, int duration, string UserRating, string vidRating, string Year){  //Non-default constructor

      playList = "None";
      year = Year;
      videoName = title;
      videoRating = vidRating;
      userRating = UserRating;
      int videoDuration = duration;
      videoType = genre;
    }

    string getVideoName() const{  //accessor
      return videoName;
    }

    string getVideoType() const {
      return videoType;
    }

    string getVideoRating() const {
      return videoRating;
    }

    string getVideoPlaylist() const {
      return playList;
    }

    int getVideoDuration() const {
      return videoDuration;
    }

    string getUserRating() const {
      return userRating;
    }
    string getVideoYear() const {
      return year;
    }

    virtual void PrintItem() = 0;  //virtual void function

  private:          //private variables
    string playList;

  protected:       //protected variables
    string videoName;
    string videoRating;
    string userRating;
    int videoDuration;
    string videoType;
    string year;
};

#endif           //Indicate end of header file

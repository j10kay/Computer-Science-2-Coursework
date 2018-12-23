#ifndef VIDEO_H
#define VIDEO_H

class Video {
  public:
  //Public functions
    Video(); //Default constructor
    Video(string, string, string, string, string, string, string);  //Non-default constructor
    //Mutator
    void setVideoInfo(string, string, string, string, string, string, string);
    //Accessors
    string getTitle() const;
    string getRating() const;
    string getRatingLevel() const;
    string getRatingDescription() const;
    string getReleaseYear() const;
    string getUserRatingScore() const;
    string getUserRatingSize() const;
  private:
  //Private variables
    string title;
    string rating;
    string ratingLevel;
    string ratingDescription;
    string releaseYear;
    string userRatingScore;
    string userRatingSize;
};

#endif

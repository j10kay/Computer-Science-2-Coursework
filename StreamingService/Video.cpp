#include <iostream>
using namespace std;

#include "Video.h"

Video::Video (){      //Default constructor
  string playList = "None";
  string videoName = "None";
  string rating = "None";
  string streamingService = "None";
  int videoDuration = 0;
  string videoType = "None";

}

Video::Video (string vidName, int vidDuration, string vidRating, string vidType, string vidStreamingService){  //nondefault constructor
  string playList = "None";
  string videoName = vidName;
  string rating = vidRating;
  string streamingService = vidStreamingService;
  int videoDuration = vidDuration;
  string videoType = vidType;
}

void Video::setVideoInfo(string vidName, int vidDuration, string vidRating, string vidType, string vidStreamingService) {  //mutator
  string playList = "None";
  string videoName = vidName;
  string rating = vidRating;
  string streamingService = vidStreamingService;
  int videoDuration = vidDuration;
  string videoType = vidType;
  return;
}

string Video::getVideoName() const{  //accessor
  return videoName;
}

string Video::getVideoType() const {
  return videoType;
}

string Video::getVideoRating() const {
  return rating;
}

string Video::getVideoPlaylist() const {
  return playList;
}

int Video::getVideoDuration() const {
  return videoDuration;
}

string Video::getStreamingService() const {
  return streamingService;
}

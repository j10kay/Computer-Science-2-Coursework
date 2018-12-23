#include <iostream>
using namespace std;

#include "Video.h"

Video::Video (){      //default constructor
  videoName = "empty";
  videoType = "empty";
  videoDuration.hours = 0;
  videoDuration.minutes = 0;
  videoDuration.seconds = 0;
  playList = "empty";
}

Video::Video (string vidName, string vidType, int hrs, int mins, int secs, string playlist){  //nondefault constructor
  videoName = vidName;
  videoType = vidType;
  videoDuration.hours = hrs;
  videoDuration.minutes = mins;
  videoDuration.seconds = secs;
  playList = playlist;
}

void Video::setVideoInfo(string vidName, string vidType, int hrs, int mins, int secs, string playlist) {  //mutator
  videoName = vidName;
  videoType = vidType;
  videoDuration.hours = hrs;
  videoDuration.minutes = mins;
  videoDuration.seconds = secs;
  playList = playlist;
  return;
}

string Video::getVideoName() const{  //accessor
  return videoName;
}

string Video::getVideoType() const {
  return videoType;
}

string Video::getVideoPlaylist() const {
  return playList;
}

string Video::getVideoDuration() const {
  string duration;
  if (videoDuration.hours > 1)
    duration = to_string(videoDuration.hours) + " hours " + to_string(videoDuration.minutes) + " minutes";
  else if (videoDuration.hours == 1)
    duration = to_string(videoDuration.hours) + " hour " + to_string(videoDuration.minutes) + " minutes";
  else if (videoDuration.hours == 0)
    duration = to_string(videoDuration.minutes) + " minutes";
  return duration;
}

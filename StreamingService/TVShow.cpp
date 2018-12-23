#include <iostream>
using namespace std;

#include "Video.h"
#include "TVShow.h"

TVShow::TVShow (){      //Default constructor

  videoName = "None";
  rating = "None";
  streamingService = "None";
  videoDuration = 0;
  videoType = "None";
  season = "None";
  episode = "None";

}

TVShow::TVShow (string vidName, int vidDuration, string vidRating, string vidType, string vidStreamingService){  //nondefault constructor
  videoName = vidName;
  rating = vidRating;
  streamingService = vidStreamingService;
  videoDuration = vidDuration;
  videoType = vidType;
}

void TVShow::PrintItem(){
cout << "Added:" << endl;
cout << videoName << endl;
cout << "Type: " << "TV-Show" << endl;
cout << "Genre: " << videoType << endl;
cout << "Duration: " << videoDuration << " minutes" << endl;
cout << "Rating: " << rating << endl;
cout << "Streaming Service: " << streamingService << "e" << endl;
}

#include <iostream>

int main() {
    std::string url("https//www.reddit.com/r/nevertellmethebots");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!
    //https://www.reddit.com/r/nevertellmetheodds/
    url.replace(38, 4, "odds");
    url.insert(5, ":", 1);
    std::cout << url << std::endl;

    return 0;
}
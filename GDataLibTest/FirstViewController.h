//
//  FirstViewController.h
//  GDataLibTest
//
//  Created by Fr@nk on 18/05/13.
//  Copyright (c) 2013 LuBannaiuolu. All rights reserved.
//


#import <UIKit/UIKit.h>


#import "GDataYouTube.h"
#import "YouTubeViewController.h"
#import "GDataServiceGoogleYouTube.h"
#import "AppDelegate.h"


@interface FirstViewController : UITableViewController {
    GDataFeedYouTubeVideo *feed;
    YouTubeViewController *youTubeViewController;
    UIWebView *uiWebView;
    NSString *videoURL;
    UIProgressView *progressView;
    NSMutableArray *feedEntries;
    
    AppDelegate *appDelegate;
    
    UIActivityIndicatorView *spinner;
    UIAlertView *progressAlert;
}
@property (nonatomic, retain) NSString *videoURL;

- (void) launchVideo;
//- (void)showWithDetailsLabel;

@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *spinner;
@property (nonatomic, retain) IBOutlet  UIAlertView *progressAlert;
@property (nonatomic, retain) GDataFeedYouTubeVideo *feed;
@property (nonatomic, retain) NSMutableArray *feedEntries;

@end


//
//  YouTubeViewController.h
//  YoutubeTest
//
//

#import <UIKit/UIKit.h>

@interface YouTubeViewController : UIViewController<UIWebViewDelegate>{ 
    IBOutlet UIWebView *videoView;
    NSString *videoURL;
    NSString *videoHTML;
    
}

@property(nonatomic, retain) IBOutlet UIWebView *videoView;
@property(nonatomic, retain) NSString *videoURL;
@property(nonatomic, retain) NSString *videoHTML;

- (void)embedYouTube:(NSString *)urlString frame:(CGRect)frame;
- (IBAction) closeModal;

@end
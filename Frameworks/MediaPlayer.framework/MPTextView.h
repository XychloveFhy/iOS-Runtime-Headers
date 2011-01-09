/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableString, UIProgressIndicator, UIImageView, UIView, UIImage, NSString, UIScrollView, UIWebDocumentView, UITextLabel;



@interface MPTextView : MPSwipableView 
{
    UIImage *_albumArtwork;
    NSString *_rawText;
    NSMutableString *_text;
    UIImageView *_background;
    UIImageView *_faderView;
    UIWebDocumentView *_webView;
    UIView *_headerView;
    UIScrollView *_scrollView;
    UITextLabel *_loadingLabel;
    UIProgressIndicator *_loadingIndicator;
    BOOL _scrollIndicatorFlashDisabled;
    BOOL _needsLayout;
}

@property(retain) UIView *headerView;


- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (BOOL)hasText;
- (void)movedFromSuperview:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)setScrollIndicatorFlashDisabled:(BOOL)arg1;
- (void)_updateLoadingUIForWillLoad:(BOOL)arg1;
- (void)_addLoadingUI;
- (void)_addTextUI;
- (void)_createTextUIIfNeeded;
- (void)_removeLoadingUI;
- (void)_removeTextUI;
- (struct CGImage { }*)_newFaderImageBackgroundWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGImage { }*)_newFaderImage:(BOOL)arg1;
- (void)_updateFaderImage:(BOOL)arg1;
- (id)headerView;
- (void)setArtwork:(id)arg1;
- (void)noteWillSnapshot;
- (void)noteDidSnapshot;
- (void)setText:(id)arg1 willLoad:(BOOL)arg2;
- (void)setHeaderView:(id)arg1;

@end

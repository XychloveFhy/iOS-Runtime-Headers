/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextLabel, UIImageView;



@interface UIImageAndTextTableCell : UITableCell 
{
    UITextLabel *_titleTextLabel;
    UIImageView *_iconImageView;
}

+ (id)defaultTitleFont;

- (id)_getTitleColor;
- (id)iconImageView;
- (struct CGPoint { float x1; float x2; })textInset;
- (struct CGPoint { float x1; float x2; })iconInset;
- (id)title;
- (id)image;
- (id)_scriptingInfo;
- (void)setAlignment:(NSInteger)arg1;
- (NSInteger)alignment;
- (void)updateHighlightColors;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)titleTextLabel;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end

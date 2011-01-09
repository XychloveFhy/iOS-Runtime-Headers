/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIButton, CKBalloonView;



@interface CKMessageCell : UITableViewCell 
{
    CKBalloonView *_balloonView;
    UIButton *_failedButton;
    float _topPadding;
    float _bottomPadding;
    id _replacementMessageBubbleData;
}

@property(retain) id replacementMessageBubbleData;
@property(readonly) CKBalloonView *balloonView;

+ (id)_exclamationGlyphImage;
+ (id)_failImage;
+ (id)_failPressedImage;
+ (void)_initializeSafeCategory;

- (id)_multiselectBackgroundColor;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_failPressed:(id)arg1;
- (void)_resetBalloonFrame;
- (void)addBalloonView:(id)arg1;
- (void)setReplacementMessageBubbleData:(id)arg1;
- (void)setTopPadding:(float)arg1 bottomPadding:(float)arg2;
- (id)balloonView;
- (id)replacementMessageBubbleData;
- (void)setFailed:(BOOL)arg1;
- (void)didTapBalloon:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)accessibilityActivate;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilitySupportsActivateAction;

@end

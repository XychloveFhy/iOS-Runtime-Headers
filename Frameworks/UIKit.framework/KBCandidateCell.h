/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface KBCandidateCell : UIView 
{
    NSString *_candidate;
    NSUInteger _index;
    struct CGSize { 
        float width; 
        float height; 
    } _stringImageSize;
    BOOL _isLastInLine;
    BOOL _highlighted;
    float _atBottom;
    id _target;
    SEL _action;
    BOOL _drawDone;
    BOOL _stringMayBeTooLong;
    BOOL _drawLeftBoundary;
}

+ (id)font;
+ (void)_initializeSafeCategory;

- (id)initWithCandidate:(id)arg1 andIndex:(NSUInteger)arg2 target:(id)arg3 action:(SEL)arg4;
- (struct CGSize { float x1; float x2; })stringImageSize;
- (void)setGap:(float)arg1;
- (float)dividorOriginX;
- (void)setLastInLine:(BOOL)arg1;
- (void)setDrawLeftBoundary:(BOOL)arg1;
- (void)setStringMayBeTooLong:(BOOL)arg1;
- (void)setAtBottom:(BOOL)arg1;
- (NSUInteger)index;
- (void)selected;
- (void)setHighlighted:(BOOL)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)dealloc;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;

@end

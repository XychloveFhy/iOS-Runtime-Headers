/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface WDAAnchor : NSObject 
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    NSInteger mTextWrappingMode;
    NSInteger mTextWrappingModeType;
    double mWrapDistanceLeft;
    double mWrapDistanceTop;
    double mWrapDistanceRight;
    double mWrapDistanceBottom;
    NSInteger mHorizontalPosition;
    NSInteger mRelativeHorizontalPosition;
    NSInteger mVerticalPosition;
    NSInteger mRelativeVerticalPosition;
    BOOL mIsBehindText;
    BOOL mAllowOverlap;
    BOOL mMoveWithText;
    NSInteger mZIndexTotal;
    NSInteger mZIndex;
}

@property BOOL allowOverlap;
@property NSInteger textWrappingModeType;
@property NSInteger textWrappingMode;
@property CGRect bounds;


- (NSInteger)zIndex;
- (void)setZIndex:(NSInteger)arg1;
- (double)wrapDistanceLeft;
- (double)wrapDistanceTop;
- (double)wrapDistanceRight;
- (double)wrapDistanceBottom;
- (NSInteger)zIndexTotal;
- (void)setZIndexTotal:(NSInteger)arg1;
- (BOOL)allowOverlap;
- (void)setAllowOverlap:(BOOL)arg1;
- (NSInteger)textWrappingModeType;
- (void)setBehindText:(BOOL)arg1;
- (void)setRelativeHorizontalPosition:(NSInteger)arg1;
- (void)setRelativeVerticalPosition:(NSInteger)arg1;
- (void)setHorizontalPosition:(NSInteger)arg1;
- (void)setVerticalPosition:(NSInteger)arg1;
- (void)setTextWrappingMode:(NSInteger)arg1;
- (void)setTextWrappingModeType:(NSInteger)arg1;
- (void)setWrapDistanceBottom:(double)arg1;
- (void)setWrapDistanceLeft:(double)arg1;
- (void)setWrapDistanceRight:(double)arg1;
- (void)setWrapDistanceTop:(double)arg1;
- (NSInteger)horizontalPosition;
- (NSInteger)verticalPosition;
- (NSInteger)relativeVerticalPosition;
- (BOOL)isBehindText;
- (NSInteger)textWrappingMode;
- (NSInteger)relativeHorizontalPosition;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end

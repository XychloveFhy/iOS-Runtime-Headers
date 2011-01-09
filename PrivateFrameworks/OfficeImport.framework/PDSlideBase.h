/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableStyle, OADBackground, NSString, NSArray, PDAnimation, PDTransition;



@interface PDSlideBase : NSObject 
{
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    OADTableStyle *mDefaultTableStyle;
    unsigned int mIsHidden : 1;
    unsigned int mIsDoneWithContent : 1;
}

+ (NSInteger)inheritedPlaceholderType:(NSInteger)arg1;

- (void)addSlideNumberPlaceholder:(id)arg1;
- (void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2;
- (void)setIsHidden:(BOOL)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (id)placeholderWithType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 useBaseTypeMatch:(BOOL)arg3;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)placeholderWithType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextBodyPropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextStyleForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)masterGraphicForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)transition;
- (void)setTransition:(id)arg1;
- (void)doneWithContent;
- (id)defaultTableStyle;
- (id)drawingTheme;
- (id)parentSlideBase;
- (id)drawables;
- (id)defaultTheme;
- (id)fontScheme;
- (id)colorMap;
- (id)colorScheme;
- (id)styleMatrix;
- (void)setBackground:(id)arg1;
- (id)background;
- (id)animation;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (BOOL)isHidden;
- (void)dealloc;

@end

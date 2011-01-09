/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDNotesSlide, NSMutableArray, PDSlideLayout;



@interface PDSlide : PDSlideChild 
{
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}


- (void)setSlideLayout:(id)arg1;
- (id)notesSlide;
- (void)setNotesSlide:(id)arg1;
- (NSUInteger)commentCount;
- (id)commentAtIndex:(NSUInteger)arg1;
- (void)addComment:(id)arg1;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextBodyPropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextStyleForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)masterGraphicForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (void)doneWithContent;
- (id)slideLayout;
- (id)parentSlideBase;
- (id)defaultTheme;
- (void)dealloc;

@end

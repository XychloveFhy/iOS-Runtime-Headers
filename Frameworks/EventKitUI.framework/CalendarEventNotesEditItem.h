/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */



@interface CalendarEventNotesEditItem : CalendarEventEditItem 
{
}


- (void)absorbValueFromDictionary:(id)arg1;
- (BOOL)editItemViewDirty:(id)arg1;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (void)saveIntoEvent:(void*)arg1;
- (void)absorbValueFromView:(id)arg1;
- (id)serializedValue;
- (BOOL)shouldCancelEditingForModel:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (id)identifier;
- (void)dealloc;

@end

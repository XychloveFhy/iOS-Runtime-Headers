/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface _UIGroupItem : NSObject 
{
    NSString *_title;
    float offset;
    NSInteger _rowCountBeforeGroup;
    NSInteger _childCount;
    unsigned int _isRadioGroup : 1;
    unsigned int _isLabelGroup : 1;
    unsigned int _reserved : 30;
}


- (id)initWithTitle:(id)arg1 childCount:(NSInteger)arg2 rowCountBeforeGroup:(NSInteger)arg3 isRadioGroup:(BOOL)arg4;
- (NSInteger)childCount;
- (NSInteger)rowCountBeforeGroup;
- (NSInteger)tableRowForRow:(NSInteger)arg1;
- (id)title;
- (void)dealloc;

@end

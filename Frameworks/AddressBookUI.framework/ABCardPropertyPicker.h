/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, UITableView;



@interface ABCardPropertyPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABStyleProviding>
{
    UITableView *_tableView;
    NSArray *_allProperties;
    id _delegate;
}

@property(readonly) UITableView *tableView;


- (id)tableView;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (id)styleProvider;
- (void)setProperties:(struct __CFArray { }*)arg1;

@end

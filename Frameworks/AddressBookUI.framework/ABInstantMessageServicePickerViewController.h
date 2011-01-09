/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, NSString, NSArray;



@interface ABInstantMessageServicePickerViewController : ABPickerViewController 
{
    NSString *_selectedService;
    NSString *_customService;
    NSArray *_defaultServices;
    NSIndexPath *_selectedIndexPath;
}

@property(copy) NSString *selectedService;


- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)selectedService;
- (void)setSelectedService:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;

@end

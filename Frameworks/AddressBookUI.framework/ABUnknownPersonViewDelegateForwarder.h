/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABUnknownPersonViewController;



@interface ABUnknownPersonViewDelegateForwarder : NSObject <ABNewPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    ABUnknownPersonViewController *_viewController;
}


- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithUnknownPersonViewController:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;

@end

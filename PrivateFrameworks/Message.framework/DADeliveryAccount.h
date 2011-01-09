/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAMailAccount;



@interface DADeliveryAccount : DeliveryAccount 
{
    DAMailAccount *_DAMailAccount;
}


- (id)initWithDAMailAccount:(id)arg1;
- (Class)deliveryClass;
- (id)mailAccountIfAvailable;
- (id)newDeliveryWithMessage:(id)arg1;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (void)dealloc;

@end

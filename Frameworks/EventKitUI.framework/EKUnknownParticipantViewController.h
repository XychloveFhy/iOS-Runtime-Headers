/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKParticipant;



@interface EKUnknownParticipantViewController : ABUnknownPersonViewController <ABUnknownPersonViewControllerDelegate>
{
    EKParticipant *_participant;
}


- (void)setParticipant:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)dealloc;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;

@end

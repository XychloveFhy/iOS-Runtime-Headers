/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMServiceImpl;



@interface IMServicePeopleListGroup : IMPeopleListGroup 
{
    IMServiceImpl *_serviceFilter;
}

+ (id)bonjourGroup;

- (void)dealloc;
- (id)initWithServiceFilter:(id)arg1;
- (BOOL)shouldContainIMHandle:(id)arg1;
- (BOOL)shouldConsumeIMHandle:(id)arg1;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; })filterForIMHandle:(id)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, IMPerson, NSString, NSMutableArray;



@interface IMMe : NSObject 
{
    IMPerson *_person;
    NSString *_abNickname;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSArray *_abEmails;
    NSMutableArray *_abIMHandles;
    NSMutableArray *_loginIMHandles;
}

+ (id)me;
+ (id)fallbackUserName;
+ (id)imHandleForService:(id)arg1;

- (id)email;
- (id)lastName;
- (id)firstName;
- (id)emails;
- (id)init;
- (void)dealloc;
- (id)nickname;
- (id)person;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (id)loginIMHandles;
- (BOOL)isIMHandleLoginIMHandle:(id)arg1;
- (id)bestIMHandle;
- (id)imHandles;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)myPictureChanged;
- (void)rebuildIMHandles;
- (BOOL)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (BOOL)addLoginIMHandle:(id)arg1;
- (void)setIMPerson:(id)arg1;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
- (id)guid;
- (id)fullName;

@end

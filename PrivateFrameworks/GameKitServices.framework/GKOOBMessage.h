/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */



@interface GKOOBMessage : NSObject 
{
    unsigned short _type;
}

@property(readonly) unsigned short type;


- (unsigned short)type;
- (id)data;
- (id)initWithBytes:(void*)arg1 length:(unsigned long)arg2;
- (BOOL)_checkType:(unsigned short)arg1;
- (BOOL)_checkSize:(unsigned long)arg1;
- (id)initWithMessageType:(unsigned short)arg1;

@end

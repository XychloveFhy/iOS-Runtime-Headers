/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class PBDataWriter, PBStreamWriter;



@interface PBMessageStreamWriter : NSObject 
{
    PBStreamWriter *_writer;
    PBDataWriter *_messageWriter;
}

@property(retain) PBDataWriter *messageWriter;
@property(retain) PBStreamWriter *writer;


- (id)writer;
- (void)setWriter:(id)arg1;
- (void)dealloc;
- (BOOL)writeMessage:(id)arg1;
- (id)messageWriter;
- (void)setMessageWriter:(id)arg1;
- (id)initWithOutputStream:(id)arg1;

@end

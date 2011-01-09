/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPTimedMetadata : NSObject 
{
    id _internal;
}

@property(readonly) NSString *key;
@property(readonly) NSString *keyspace;
@property(readonly) id value;
@property(readonly) double timestamp;
@property(readonly) NSDictionary *allMetadata;


- (id)key;
- (id)value;
- (double)timestamp;
- (id)init;
- (void)dealloc;
- (id)_initWithMetadataDictionary:(id)arg1;
- (id)keyspace;
- (id)allMetadata;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKCache : NSObject 
{
    id _imp;
}

@property(readonly) NSArray *allObjects;
@property(readonly) NSUInteger count;
@property float compactionFactor;
@property(readonly) NSUInteger maxCapacity;

+ (id)impWithCapacity:(NSUInteger)arg1 maxCapacity:(NSUInteger)arg2 delegate:(id)arg3;

- (void)compact;
- (float)compactionFactor;
- (void)setCompactionFactor:(float)arg1;
- (NSUInteger)maxCapacity;
- (void)setMaxCapacity:(NSUInteger)arg1;
- (id)initWithCapacity:(NSUInteger)arg1 maxCapacity:(NSUInteger)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (NSUInteger)getKeys:(const void**)arg1 values:(const void**)arg2;
- (id)allObjects;
- (id)description;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)dealloc;

@end

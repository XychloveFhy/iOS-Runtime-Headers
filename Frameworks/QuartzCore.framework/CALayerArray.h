/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CALayer;



@interface CALayerArray : NSArray 
{
    struct _CALayerArrayIvars { 
        CALayer **layers; 
        NSUInteger count; 
        NSUInteger capacity; 
        unsigned long mutations; 
        BOOL retained; 
    } _ivars;
}


- (void)getObjects:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithLayers:(id*)arg1 count:(unsigned long)arg2 retain:(BOOL)arg3;

@end

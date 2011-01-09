/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CATiledLayer : CALayer 
{
}

@property NSUInteger levelsOfDetail;
@property NSUInteger levelsOfDetailBias;
@property CGSize tileSize;

+ (double)fadeDuration;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)shouldDrawOnMainThread;

- (void)didChangeValueForKey:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContents:(id)arg1;
- (void)dealloc;
- (void)_display;
- (BOOL)_canDisplayConcurrently;
- (unsigned long)levelsOfDetail;
- (void)setLevelsOfDetail:(unsigned long)arg1;
- (unsigned long)levelsOfDetailBias;
- (void)setLevelsOfDetailBias:(unsigned long)arg1;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;

@end
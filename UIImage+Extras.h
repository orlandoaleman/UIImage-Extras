#import "UIImage+AlphaAdditions.h"
#import "UIImage+ResizeAdditions.h"
#import "UIImage+RoundedCornerAdditions.h"


@interface UIImage (Misc)
+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color andSize:(CGSize)targetSize;
- (UIImage *)imageByScalingAndCroppingForSize:(CGSize)targetSize;

/// Set the image orientation to portrait
- (UIImage *)fixOrientation;
@end
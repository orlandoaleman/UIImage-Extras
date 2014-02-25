#import "UIImage+AlphaAdditions.h"
#import "UIImage+ResizeAdditions.h"
#import "UIImage+RoundedCornerAdditions.h"


@interface UIImage (Misc)
+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color andSize:(CGSize)targetSize;
- (UIImage *)imageByScalingAndCroppingForSize:(CGSize)targetSize;

/// Set the image orientation to portrait
- (UIImage *)fixOrientation;

- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

/// Return a new image tinted with the specified color
- (UIImage *)imageTintedOfColor:(UIColor *)color;

@end
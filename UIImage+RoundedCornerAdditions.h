//
// UIImage+RoundedCornerAdditions.h
// Created by Trevor Harmon on 9/20/09.
// Free for personal or commercial use, with or without modification.
// No warranty is expressed or implied.
//
// Extends the UIImage class to support making rounded corners
//
// http://vocaro.com/trevor/blog/2009/10/12/resize-a-uiimage-the-right-way/
//

@interface UIImage (RoundedCorner)


/// Creates a copy of this image with rounded corners. If borderSize is non-zero, a transparent border of
/// the given size will also be added
- (UIImage *)roundedCornerImage:(NSInteger)cornerSize borderSize:(NSInteger)borderSize;

@end
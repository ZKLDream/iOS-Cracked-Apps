//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGThemeBaseAttribute.h"

@class NSString, UIImage;

@interface KGThemeImageAttribute : KGThemeBaseAttribute
{
    NSString *_imageUrl;
    NSString *_highlightedImageUrl;
    UIImage *_image;
    UIImage *_highlightedImage;
}

@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *highlightedImageUrl; // @synthesize highlightedImageUrl=_highlightedImageUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;

@end


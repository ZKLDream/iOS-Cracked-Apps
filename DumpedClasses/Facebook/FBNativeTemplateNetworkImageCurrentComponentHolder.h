//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBNativeTemplateNetworkImage, NSString, UIImage;

@interface FBNativeTemplateNetworkImageCurrentComponentHolder : NSObject
{
    _Bool _initialized;
    UIImage *_currentImage;
    NSString *_urlString;
    NSString *_borderColorString;
    NSString *_outsideColorString;
    NSString *_cornerRadiusString;
    NSString *_borderWidthString;
    FBNativeTemplateNetworkImage *_currentImageProvider;
    struct UIEdgeInsets _insets;
}

@property __weak FBNativeTemplateNetworkImage *currentImageProvider; // @synthesize currentImageProvider=_currentImageProvider;
@property(copy) NSString *borderWidthString; // @synthesize borderWidthString=_borderWidthString;
@property(copy) NSString *cornerRadiusString; // @synthesize cornerRadiusString=_cornerRadiusString;
@property(copy) NSString *outsideColorString; // @synthesize outsideColorString=_outsideColorString;
@property(copy) NSString *borderColorString; // @synthesize borderColorString=_borderColorString;
@property(copy) NSString *urlString; // @synthesize urlString=_urlString;
@property struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIImage, UIViewController;

@protocol PhotoEditDelegate <NSObject>

@optional
- (void)photoEditorSend:(UIViewController *)arg1 gifImages:(NSArray *)arg2 ration:(double)arg3;
- (void)photoEditorSend:(UIViewController *)arg1;
- (void)photoEditor:(UIViewController *)arg1 provideEditingImage:(UIImage *)arg2 asset:(id)arg3 hasEdited:(_Bool)arg4;
- (void)photoEditor:(UIViewController *)arg1 willDisappear:(_Bool)arg2;
- (void)photoEditor:(UIViewController *)arg1 didFinishWithImage:(UIImage *)arg2 asset:(id)arg3 shouldOpenDoodle:(_Bool)arg4 hasEdited:(_Bool)arg5;
- (void)photoEditorDidCancel:(UIViewController *)arg1;
@end


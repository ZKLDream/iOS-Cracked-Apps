//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWPhotoPickerController, GWPicture;

@protocol GWPhotoPickerControllerDelegate <NSObject>
- (void)GWPhotoPickerController:(GWPhotoPickerController *)arg1 didDeselectPicture:(GWPicture *)arg2;
- (void)GWPhotoPickerController:(GWPhotoPickerController *)arg1 didSelectPicture:(GWPicture *)arg2;
- (_Bool)GWPhotoPickerController:(GWPhotoPickerController *)arg1 shouldSelectPicture:(GWPicture *)arg2;
@end


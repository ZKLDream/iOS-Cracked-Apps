//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class RPDisplayInfo;

@interface RPItemView : UIView
{
    RPDisplayInfo *_displayInfo;
}

+ (id)itemViewWithDisplayInfo:(id)arg1;
@property(retain, nonatomic) RPDisplayInfo *displayInfo; // @synthesize displayInfo=_displayInfo;
- (void).cxx_destruct;
- (_Bool)isShowedUIEqualToDisplayInfo:(id)arg1;
- (void)setAttributesInDictionary:(id)arg1;
- (struct CGSize)layoutSize;
- (void)setContentString:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)initWithInfo:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DCButtonContentModel<Optional>, DCCarpoolersInfoModel<Optional>, DCGuideWebModel<Optional>, DCNoteInfoModel<Optional>, DCOrderBottomTipsModel<Optional>, DCOrderLiftAdultChildBabyNumberModel<Optional>, DCOrderSCTXModel<Optional>, DCPOrderContextModel<Optional>, DCRemindListInfoAlertModel<Optional>, DCYSInviteInfoModel<Optional>, NSArray<DCButtonContentModel><Optional>, NSArray<DCFloatLayerModel><Optional>, NSArray<DCOrderMapGeoModel><Optional>, NSArray<DCOrderNoticeModel><Optional>, NSString<Optional>;

@interface DCGetOrderInfoBaseModel : TRBaseModel
{
    NSString<Optional> *_private_order;
    DCYSInviteInfoModel<Optional> *_invite_info;
    DCRemindListInfoAlertModel<Optional> *_cancel_alert;
    DCOrderBottomTipsModel<Optional> *_bottom_tips;
    NSString<Optional> *_title;
    DCCarpoolersInfoModel<Optional> *_carpoolers;
    DCButtonContentModel<Optional> *_cp_title;
    NSArray<DCFloatLayerModel><Optional> *_float_layer;
    NSString<Optional> *_use_web;
    NSString<Optional> *_web_url;
    NSString<Optional> *_is_show_nav;
    NSString<Optional> *_refresh_time;
    NSString<Optional> *_is_hide_detail;
    NSArray<DCOrderNoticeModel><Optional> *_tip_bars;
    NSArray<DCButtonContentModel><Optional> *_user_actions;
    NSArray<DCOrderMapGeoModel><Optional> *_geo_feature;
    DCNoteInfoModel<Optional> *_note_info;
    DCPOrderContextModel<Optional> *_tempModel;
    DCOrderSCTXModel<Optional> *_sctx;
    DCGuideWebModel<Optional> *_guide_strive;
    DCOrderLiftAdultChildBabyNumberModel<Optional> *_travel_cfg;
    NSString<Optional> *_scheme;
}

+ (id)getBottomOperationModel:(id)arg1;
@property(copy, nonatomic) NSString<Optional> *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) DCOrderLiftAdultChildBabyNumberModel<Optional> *travel_cfg; // @synthesize travel_cfg=_travel_cfg;
@property(retain, nonatomic) DCGuideWebModel<Optional> *guide_strive; // @synthesize guide_strive=_guide_strive;
@property(retain, nonatomic) DCOrderSCTXModel<Optional> *sctx; // @synthesize sctx=_sctx;
@property(retain, nonatomic) DCPOrderContextModel<Optional> *tempModel; // @synthesize tempModel=_tempModel;
@property(retain, nonatomic) DCNoteInfoModel<Optional> *note_info; // @synthesize note_info=_note_info;
@property(retain, nonatomic) NSArray<DCOrderMapGeoModel><Optional> *geo_feature; // @synthesize geo_feature=_geo_feature;
@property(retain, nonatomic) NSArray<DCButtonContentModel><Optional> *user_actions; // @synthesize user_actions=_user_actions;
@property(retain, nonatomic) NSArray<DCOrderNoticeModel><Optional> *tip_bars; // @synthesize tip_bars=_tip_bars;
@property(copy, nonatomic) NSString<Optional> *is_hide_detail; // @synthesize is_hide_detail=_is_hide_detail;
@property(copy, nonatomic) NSString<Optional> *refresh_time; // @synthesize refresh_time=_refresh_time;
@property(copy, nonatomic) NSString<Optional> *is_show_nav; // @synthesize is_show_nav=_is_show_nav;
@property(copy, nonatomic) NSString<Optional> *web_url; // @synthesize web_url=_web_url;
@property(copy, nonatomic) NSString<Optional> *use_web; // @synthesize use_web=_use_web;
@property(retain, nonatomic) NSArray<DCFloatLayerModel><Optional> *float_layer; // @synthesize float_layer=_float_layer;
@property(retain, nonatomic) DCButtonContentModel<Optional> *cp_title; // @synthesize cp_title=_cp_title;
@property(retain, nonatomic) DCCarpoolersInfoModel<Optional> *carpoolers; // @synthesize carpoolers=_carpoolers;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) DCOrderBottomTipsModel<Optional> *bottom_tips; // @synthesize bottom_tips=_bottom_tips;
@property(retain, nonatomic) DCRemindListInfoAlertModel<Optional> *cancel_alert; // @synthesize cancel_alert=_cancel_alert;
@property(retain, nonatomic) DCYSInviteInfoModel<Optional> *invite_info; // @synthesize invite_info=_invite_info;
@property(copy, nonatomic) NSString<Optional> *private_order; // @synthesize private_order=_private_order;
- (void).cxx_destruct;

@end


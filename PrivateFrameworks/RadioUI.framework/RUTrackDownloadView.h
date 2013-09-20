/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUTrackDownloadViewDelegate>, MPMediaDownloadObserver, MPMediaItem, NSString, RadioTrack, SKUIItemOfferButton, UIViewController;

@interface RUTrackDownloadView : UIView <MCProfileConnectionObserver, MPStoreDownloadManagerObserver, SKStoreProductViewControllerDelegate, SKUIItemOfferButtonDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    NSString *_baseOriginator;
    int _buyButtonTitleStyle;
    <RUTrackDownloadViewDelegate> *_delegate;
    MPMediaDownloadObserver *_downloadObserver;
    BOOL _isInAppPurchaseAllowed;
    BOOL _isProfileInAppPurchaseAllowed;
    BOOL _isProfileiTunesAllowed;
    SKUIItemOfferButton *_itemOfferButton;
    MPMediaItem *_mediaItem;
    } _overrideSize;
    int _overrideState;
    NSString *_overrideTitleText;
    RadioTrack *_radioTrack;
    BOOL _showingConfirmation;
    int _state;
    NSString *_stationHash;
    long long _stationID;
    UIViewController *_viewControllerForPresenting;
}

@property(copy) NSString * baseOriginator;
@property int buyButtonTitleStyle;
@property <RUTrackDownloadViewDelegate> * delegate;
@property struct CGSize { float x1; float x2; } overrideSize;
@property int overrideState;
@property(copy) NSString * overrideTitleText;
@property(retain) RadioTrack * radioTrack;
@property(readonly) int state;
@property(copy) NSString * stationHash;
@property long long stationID;
@property UIViewController * viewControllerForPresenting;

- (void).cxx_destruct;
- (long long)_downloadStoreID;
- (BOOL)_isAlbumOnlyRadioTrack:(id)arg1;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_itemOfferCancelConfirmationAction:(id)arg1;
- (void)_itemOfferShowConfirmationAction:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_sizeToFitAndNotifyDelegate;
- (void)_updateIsInAppPurchaseAllowedForProfileConnection:(id)arg1 updateState:(BOOL)arg2;
- (void)_updateStateAndInternalViewsAnimated:(BOOL)arg1;
- (void)_updateStateAndInternalViewsIfNeededForDownloads:(id)arg1;
- (id)baseOriginator;
- (int)buyButtonTitleStyle;
- (void)dealloc;
- (id)delegate;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (struct CGSize { float x1; float x2; })overrideSize;
- (int)overrideState;
- (id)overrideTitleText;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)radioTrack;
- (void)setBaseOriginator:(id)arg1;
- (void)setBuyButtonTitleStyle:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverrideSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOverrideState:(int)arg1;
- (void)setOverrideTitleText:(id)arg1;
- (void)setRadioTrack:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setViewControllerForPresenting:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)state;
- (id)stationHash;
- (long long)stationID;
- (id)viewControllerForPresenting;

@end
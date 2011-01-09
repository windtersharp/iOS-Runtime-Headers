/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImagePickerController, UINavigationItem, NSDictionary;



@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSDictionary *_options;
    UIImagePickerController *_imagePicker;
    UINavigationItem *_navItem;
    id _delegate;
    Class _viewClass;
    NSUInteger _canCreateMetadata;
}


- (id)initWithProperties:(id)arg1;
- (BOOL)_displaysFullScreen;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)navigationItem;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)_editingForThirdParty;
- (void)_setupNavigationItemAndTrimTitle:(id)arg1;
- (id)initWithPhoto:(id)arg1 trimTitle:(id)arg2;
- (void)setViewClass:(Class)arg1;
- (void)_cancelTrim:(id)arg1;
- (void)setImagePickerOptions:(id)arg1;
- (id)uiipc_imagePickerOptions;
- (NSInteger)cropOverlayMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewFrame;
- (Class)_viewClass;
- (void)didChooseVideoAtPath:(id)arg1 options:(id)arg2;
- (id)_trimMessage;
- (float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(NSInteger)arg2;
- (void)videoViewPlaybackDidFail:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)_trimVideo:(id)arg1;
- (id)uiipc_imagePickerController;

@end
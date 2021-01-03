flatpak-builder --user --install build-dir org.huwdp.HuwInterpreter.yml
flatpak run org.huwdp.HuwInterpreter
flatpak-builder --repo=repo --force-clean build-dir org.huwdp.HuwInterpreter
$ flatpak --user remote-add --no-gpg-verify tutorial-repo repo
$ flatpak --user install tutorial-repo org.flatpak.Hello
flatpak run org.flatpak.Hello

flatpak build-bundle ~/repositories/apps dictionary.flatpak org.gnome.Dictionary

flatpak build-import-bundle ~/my-apps dictionary.flatpak
flatpak install dictionary.flatpak
